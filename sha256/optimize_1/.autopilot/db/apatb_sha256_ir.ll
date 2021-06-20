; ModuleID = 'C:/Users/menuw/Documents/research/SHA256/hls/sha256/optimize_1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%struct.SHA256_CTX = type { [64 x i8], i32, i64, [8 x i32] }

; Function Attrs: argmemonly noinline
define void @apatb_sha256_ir(%struct.SHA256_CTX* %ctx, i8* %text) local_unnamed_addr #0 {
entry:
  %ctx_copy = alloca %struct.SHA256_CTX, align 512
  %text_copy = alloca i8, align 512
  call fastcc void @copy_in(%struct.SHA256_CTX* %ctx, %struct.SHA256_CTX* nonnull align 512 %ctx_copy, i8* %text, i8* nonnull align 512 %text_copy)
  call void @apatb_sha256_hw(%struct.SHA256_CTX* %ctx_copy, i8* %text_copy)
  call fastcc void @copy_out(%struct.SHA256_CTX* %ctx, %struct.SHA256_CTX* nonnull align 512 %ctx_copy, i8* %text, i8* nonnull align 512 %text_copy)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in(%struct.SHA256_CTX* readonly, %struct.SHA256_CTX* noalias align 512, i8* readonly, i8* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.SHA256_CTX(%struct.SHA256_CTX* align 512 %1, %struct.SHA256_CTX* %0)
  call fastcc void @onebyonecpy_hls.p0i8(i8* align 512 %3, i8* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.SHA256_CTX(%struct.SHA256_CTX* noalias align 512, %struct.SHA256_CTX* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq %struct.SHA256_CTX* %0, null
  %3 = icmp eq %struct.SHA256_CTX* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx22 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr13 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %0, i32 0, i32 0, i64 %for.loop.idx22
  %src.addr14 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %1, i32 0, i32 0, i64 %for.loop.idx22
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %dst.addr13, i8* align 1 %src.addr14, i64 1, i1 false)
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx22, 1
  %exitcond23 = icmp ne i64 %for.loop.idx.next, 64
  br i1 %exitcond23, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop
  %.12.gep15 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %0, i32 0, i32 1
  %5 = bitcast i32* %.12.gep15 to i8*
  %.1.gep16 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %1, i32 0, i32 1
  %6 = bitcast i32* %.1.gep16 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %5, i8* align 1 %6, i64 4, i1 false)
  %.23.gep17 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %0, i32 0, i32 2
  %7 = bitcast i64* %.23.gep17 to i8*
  %.2.gep18 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %1, i32 0, i32 2
  %8 = bitcast i64* %.2.gep18 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %7, i8* align 1 %8, i64 8, i1 false)
  br label %for.loop6

for.loop6:                                        ; preds = %for.loop6, %copy.split
  %for.loop.idx721 = phi i64 [ 0, %copy.split ], [ %for.loop.idx7.next, %for.loop6 ]
  %dst.addr911.gep19 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %0, i32 0, i32 3, i64 %for.loop.idx721
  %9 = bitcast i32* %dst.addr911.gep19 to i8*
  %src.addr1012.gep20 = getelementptr %struct.SHA256_CTX, %struct.SHA256_CTX* %1, i32 0, i32 3, i64 %for.loop.idx721
  %10 = bitcast i32* %src.addr1012.gep20 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %9, i8* align 1 %10, i64 4, i1 false)
  %for.loop.idx7.next = add nuw nsw i64 %for.loop.idx721, 1
  %exitcond = icmp ne i64 %for.loop.idx7.next, 8
  br i1 %exitcond, label %for.loop6, label %ret

ret:                                              ; preds = %for.loop6, %entry
  ret void
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1) #3

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0i8(i8* noalias align 512, i8* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i8* %0, null
  %3 = icmp eq i8* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* nonnull align 1 %0, i8* nonnull align 1 %1, i64 1, i1 false)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out(%struct.SHA256_CTX*, %struct.SHA256_CTX* noalias readonly align 512, i8*, i8* noalias readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.SHA256_CTX(%struct.SHA256_CTX* %0, %struct.SHA256_CTX* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0i8(i8* %2, i8* align 512 %3)
  ret void
}

declare void @apatb_sha256_hw(%struct.SHA256_CTX*, i8*)

define void @sha256_hw_stub_wrapper(%struct.SHA256_CTX*, i8*) #5 {
entry:
  call void @copy_out(%struct.SHA256_CTX* null, %struct.SHA256_CTX* %0, i8* null, i8* %1)
  call void @sha256_hw_stub(%struct.SHA256_CTX* %0, i8* %1)
  call void @copy_in(%struct.SHA256_CTX* null, %struct.SHA256_CTX* %0, i8* null, i8* %1)
  ret void
}

declare void @sha256_hw_stub(%struct.SHA256_CTX*, i8*)

attributes #0 = { argmemonly noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly nounwind }
attributes #4 = { argmemonly noinline "fpga.wrapper.func"="copyout" }
attributes #5 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
