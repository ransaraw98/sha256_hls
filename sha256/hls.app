<project xmlns="com.autoesl.autopilot.project" name="sha256" top="sha256">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow askAgain="false" name="csim" csimMode="0" lastCsimMode="2"/>
    </Simulation>
    <files xmlns="">
        <file name="../../shatest.cpp" sc="0" tb="1" cflags=" -DHW_COSIM -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="sha256.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="sha256.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="inactive"/>
        <solution name="solution2_1_hash" status="inactive"/>
        <solution name="optimize_1" status="inactive"/>
        <solution name="optimize_3" status="inactive"/>
        <solution name="optimize_4" status="inactive"/>
        <solution name="optimize_5" status="inactive"/>
        <solution name="optimize_6" status="active"/>
    </solutions>
</project>

