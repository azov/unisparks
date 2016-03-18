#include "catch.hpp"
#include "DFSparks_Color.h"

using namespace dfsparks;

TEST_CASE( "HSL color model", "color") {
   REQUIRE(dfsparks::hsl(0.000000,1.000000,1.000000) == 0xff0000ff);
   REQUIRE(dfsparks::hsl(0.010000,1.000000,1.000000) == 0xff0f00ff);
   REQUIRE(dfsparks::hsl(0.020000,1.000000,1.000000) == 0xff1e00ff);
   REQUIRE(dfsparks::hsl(0.030000,1.000000,1.000000) == 0xff2d00ff);
   REQUIRE(dfsparks::hsl(0.040000,1.000000,1.000000) == 0xff3d00ff);
   REQUIRE(dfsparks::hsl(0.050000,1.000000,1.000000) == 0xff4c00ff);
   REQUIRE(dfsparks::hsl(0.060000,1.000000,1.000000) == 0xff5b00ff);
   REQUIRE(dfsparks::hsl(0.070000,1.000000,1.000000) == 0xff6b00ff);
   REQUIRE(dfsparks::hsl(0.080000,1.000000,1.000000) == 0xff7a00ff);
   REQUIRE(dfsparks::hsl(0.090000,1.000000,1.000000) == 0xff8900ff);
   REQUIRE(dfsparks::hsl(0.100000,1.000000,1.000000) == 0xff9900ff);
   REQUIRE(dfsparks::hsl(0.110000,1.000000,1.000000) == 0xffa800ff);
   REQUIRE(dfsparks::hsl(0.120000,1.000000,1.000000) == 0xffb700ff);
   REQUIRE(dfsparks::hsl(0.130000,1.000000,1.000000) == 0xffc600ff);
   REQUIRE(dfsparks::hsl(0.140000,1.000000,1.000000) == 0xffd600ff);
   REQUIRE(dfsparks::hsl(0.150000,1.000000,1.000000) == 0xffe500ff);
   REQUIRE(dfsparks::hsl(0.160000,1.000000,1.000000) == 0xfff400ff);
   REQUIRE(dfsparks::hsl(0.170000,1.000000,1.000000) == 0xf9ff00ff);
   REQUIRE(dfsparks::hsl(0.180000,1.000000,1.000000) == 0xeaff00ff);
   REQUIRE(dfsparks::hsl(0.190000,1.000000,1.000000) == 0xdbff00ff);
   REQUIRE(dfsparks::hsl(0.200000,1.000000,1.000000) == 0xcbff00ff);
   REQUIRE(dfsparks::hsl(0.210000,1.000000,1.000000) == 0xbcff00ff);
   REQUIRE(dfsparks::hsl(0.220000,1.000000,1.000000) == 0xadff00ff);
   REQUIRE(dfsparks::hsl(0.230000,1.000000,1.000000) == 0x9eff00ff);
   REQUIRE(dfsparks::hsl(0.240000,1.000000,1.000000) == 0x8eff00ff);
   REQUIRE(dfsparks::hsl(0.250000,1.000000,1.000000) == 0x7fff00ff);
   REQUIRE(dfsparks::hsl(0.260000,1.000000,1.000000) == 0x70ff00ff);
   REQUIRE(dfsparks::hsl(0.270000,1.000000,1.000000) == 0x60ff00ff);
   REQUIRE(dfsparks::hsl(0.280000,1.000000,1.000000) == 0x51ff00ff);
   REQUIRE(dfsparks::hsl(0.290000,1.000000,1.000000) == 0x42ff00ff);
   REQUIRE(dfsparks::hsl(0.300000,1.000000,1.000000) == 0x33ff00ff);
   REQUIRE(dfsparks::hsl(0.310000,1.000000,1.000000) == 0x23ff00ff);
   REQUIRE(dfsparks::hsl(0.320000,1.000000,1.000000) == 0x14ff00ff);
   REQUIRE(dfsparks::hsl(0.330000,1.000000,1.000000) == 0x05ff00ff);
   REQUIRE(dfsparks::hsl(0.340000,1.000000,1.000000) == 0x00ff0aff);
   REQUIRE(dfsparks::hsl(0.350000,1.000000,1.000000) == 0x00ff19ff);
   REQUIRE(dfsparks::hsl(0.360000,1.000000,1.000000) == 0x00ff28ff);
   REQUIRE(dfsparks::hsl(0.370000,1.000000,1.000000) == 0x00ff38ff);
   REQUIRE(dfsparks::hsl(0.380000,1.000000,1.000000) == 0x00ff47ff);
   REQUIRE(dfsparks::hsl(0.390000,1.000000,1.000000) == 0x00ff56ff);
   REQUIRE(dfsparks::hsl(0.400000,1.000000,1.000000) == 0x00ff66ff);
   REQUIRE(dfsparks::hsl(0.410000,1.000000,1.000000) == 0x00ff75ff);
   REQUIRE(dfsparks::hsl(0.420000,1.000000,1.000000) == 0x00ff84ff);
   REQUIRE(dfsparks::hsl(0.430000,1.000000,1.000000) == 0x00ff93ff);
   REQUIRE(dfsparks::hsl(0.440000,1.000000,1.000000) == 0x00ffa3ff);
   REQUIRE(dfsparks::hsl(0.450000,1.000000,1.000000) == 0x00ffb2ff);
   REQUIRE(dfsparks::hsl(0.460000,1.000000,1.000000) == 0x00ffc1ff);
   REQUIRE(dfsparks::hsl(0.470000,1.000000,1.000000) == 0x00ffd1ff);
   REQUIRE(dfsparks::hsl(0.480000,1.000000,1.000000) == 0x00ffe0ff);
   REQUIRE(dfsparks::hsl(0.490000,1.000000,1.000000) == 0x00ffefff);
   REQUIRE(dfsparks::hsl(0.500000,1.000000,1.000000) == 0x00ffffff);
   REQUIRE(dfsparks::hsl(0.510000,1.000000,1.000000) == 0x00efffff);
   REQUIRE(dfsparks::hsl(0.520000,1.000000,1.000000) == 0x00e0ffff);
   REQUIRE(dfsparks::hsl(0.530000,1.000000,1.000000) == 0x00d1ffff);
   REQUIRE(dfsparks::hsl(0.540000,1.000000,1.000000) == 0x00c1ffff);
   REQUIRE(dfsparks::hsl(0.550000,1.000000,1.000000) == 0x00b2ffff);
   REQUIRE(dfsparks::hsl(0.560000,1.000000,1.000000) == 0x00a3ffff);
   REQUIRE(dfsparks::hsl(0.570000,1.000000,1.000000) == 0x0093ffff);
   REQUIRE(dfsparks::hsl(0.580000,1.000000,1.000000) == 0x0084ffff);
   REQUIRE(dfsparks::hsl(0.590000,1.000000,1.000000) == 0x0075ffff);
   REQUIRE(dfsparks::hsl(0.600000,1.000000,1.000000) == 0x0066ffff);
   REQUIRE(dfsparks::hsl(0.610000,1.000000,1.000000) == 0x0056ffff);
   REQUIRE(dfsparks::hsl(0.620000,1.000000,1.000000) == 0x0047ffff);
   REQUIRE(dfsparks::hsl(0.630000,1.000000,1.000000) == 0x0038ffff);
   REQUIRE(dfsparks::hsl(0.640000,1.000000,1.000000) == 0x0028ffff);
   REQUIRE(dfsparks::hsl(0.650000,1.000000,1.000000) == 0x0019ffff);
   REQUIRE(dfsparks::hsl(0.660000,1.000000,1.000000) == 0x000affff);
   REQUIRE(dfsparks::hsl(0.670000,1.000000,1.000000) == 0x0500ffff);
   REQUIRE(dfsparks::hsl(0.680000,1.000000,1.000000) == 0x1400ffff);
   REQUIRE(dfsparks::hsl(0.690000,1.000000,1.000000) == 0x2300ffff);
   REQUIRE(dfsparks::hsl(0.700000,1.000000,1.000000) == 0x3200ffff);
   REQUIRE(dfsparks::hsl(0.710000,1.000000,1.000000) == 0x4200ffff);
   REQUIRE(dfsparks::hsl(0.720000,1.000000,1.000000) == 0x5100ffff);
   REQUIRE(dfsparks::hsl(0.730000,1.000000,1.000000) == 0x6000ffff);
   REQUIRE(dfsparks::hsl(0.740000,1.000000,1.000000) == 0x7000ffff);
   REQUIRE(dfsparks::hsl(0.750000,1.000000,1.000000) == 0x7f00ffff);
   REQUIRE(dfsparks::hsl(0.760000,1.000000,1.000000) == 0x8e00ffff);
   REQUIRE(dfsparks::hsl(0.770000,1.000000,1.000000) == 0x9e00ffff);
   REQUIRE(dfsparks::hsl(0.780000,1.000000,1.000000) == 0xad00ffff);
   REQUIRE(dfsparks::hsl(0.790000,1.000000,1.000000) == 0xbc00ffff);
   REQUIRE(dfsparks::hsl(0.800000,1.000000,1.000000) == 0xcc00ffff);
   REQUIRE(dfsparks::hsl(0.810000,1.000000,1.000000) == 0xdb00ffff);
   REQUIRE(dfsparks::hsl(0.820000,1.000000,1.000000) == 0xea00ffff);
   REQUIRE(dfsparks::hsl(0.830000,1.000000,1.000000) == 0xf900ffff);
   REQUIRE(dfsparks::hsl(0.840000,1.000000,1.000000) == 0xff00f4ff);
   REQUIRE(dfsparks::hsl(0.850000,1.000000,1.000000) == 0xff00e5ff);
   REQUIRE(dfsparks::hsl(0.860000,1.000000,1.000000) == 0xff00d6ff);
   REQUIRE(dfsparks::hsl(0.870000,1.000000,1.000000) == 0xff00c6ff);
   REQUIRE(dfsparks::hsl(0.880000,1.000000,1.000000) == 0xff00b7ff);
   REQUIRE(dfsparks::hsl(0.890000,1.000000,1.000000) == 0xff00a8ff);
   REQUIRE(dfsparks::hsl(0.900000,1.000000,1.000000) == 0xff0098ff);
   REQUIRE(dfsparks::hsl(0.910000,1.000000,1.000000) == 0xff0089ff);
   REQUIRE(dfsparks::hsl(0.920000,1.000000,1.000000) == 0xff007aff);
   REQUIRE(dfsparks::hsl(0.930000,1.000000,1.000000) == 0xff006bff);
   REQUIRE(dfsparks::hsl(0.940000,1.000000,1.000000) == 0xff005bff);
   REQUIRE(dfsparks::hsl(0.950000,1.000000,1.000000) == 0xff004cff);
   REQUIRE(dfsparks::hsl(0.960000,1.000000,1.000000) == 0xff003dff);
   REQUIRE(dfsparks::hsl(0.970000,1.000000,1.000000) == 0xff002dff);
   REQUIRE(dfsparks::hsl(0.980000,1.000000,1.000000) == 0xff001eff);
   REQUIRE(dfsparks::hsl(0.990000,1.000000,1.000000) == 0xff000fff);
   //REQUIRE(dfsparks::hsl(1.000000,1.000000,1.000000) == 0xff0000ff);
}
