TUBE_SIZE = 25.4*1.5;
CLAMP_THICKNESS = 4;
TOTAL_WIDTH = 20;
ANGLE = 220;
HEIGHT_ABOVE_TUBE = 6.5;
BOLT_HOLE_DIAMETER = 5;
NUT_HOLE_DEPTH = 6.25;
NUT_SIZE_BETWEEN_POINTS= 10.392;
ZIPTIE_WIDTH = 4;
CABLE_RUN_SIZE = 6;

module body(){
    translate([0, 0, -TOTAL_WIDTH/2]){
        union(){

            rotate([0, 0, 90-ANGLE/2]){
                rotate_extrude(angle=ANGLE){
                    translate([TUBE_SIZE/2, 0, 0]){
                        square([CLAMP_THICKNESS, TOTAL_WIDTH]);
                    }
                }
            }

            difference(){
                linear_extrude(height=TOTAL_WIDTH){
                    translate([-(TUBE_SIZE+CLAMP_THICKNESS*2)/2, 0, 0])
                    square([TUBE_SIZE+CLAMP_THICKNESS*2, HEIGHT_ABOVE_TUBE+CLAMP_THICKNESS+TUBE_SIZE/2]);
                }
                
                translate([0, 0, -500]){
                    cylinder(h=1000, d=TUBE_SIZE, $fn=100);
                }
            }
        }
    }
}

module holes(){
    translate([0, -500, 0]){
        rotate([-90, 0, 0]){
            cylinder(h=1000, d=BOLT_HOLE_DIAMETER, $fn=100);
        }
    }
    rotate([-90, 0, 0]){
            cylinder(h=TUBE_SIZE/2+NUT_HOLE_DEPTH, d=NUT_SIZE_BETWEEN_POINTS, $fn=6);
    }
    translate([-500, TUBE_SIZE/2+HEIGHT_ABOVE_TUBE/2, TOTAL_WIDTH/2-ZIPTIE_WIDTH-1]){
        cube([1000, 3, ZIPTIE_WIDTH]);
    }
    translate([-500, TUBE_SIZE/2+HEIGHT_ABOVE_TUBE/2, -TOTAL_WIDTH/2+1]){
        cube([1000, 3, ZIPTIE_WIDTH]);
    }   
    translate([TUBE_SIZE/2+CLAMP_THICKNESS-CABLE_RUN_SIZE/2+CABLE_RUN_SIZE/5, TUBE_SIZE/2, -500]){
        cylinder(d=CABLE_RUN_SIZE, h=1000, $fn=100);
    }
    translate([-(TUBE_SIZE/2+CLAMP_THICKNESS-CABLE_RUN_SIZE/2+CABLE_RUN_SIZE/5), TUBE_SIZE/2, -500]){
        cylinder(d=CABLE_RUN_SIZE, h=1000, $fn=100);
    }
}

difference(){
    body();
    holes();
}
