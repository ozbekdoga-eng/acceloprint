# AcceloPrint

AcceloPrint is a customizable accelerometer prototyping project combining multi-material 3D printing, mechanical beam design, capacitive sensing, MATLAB-based modeling, and embedded data-capture workflows.

The project explores how 3D-printed structures can be designed as functional sensing systems, where geometry, material selection, beam length, and fabrication parameters influence the sensing range and response of a printed accelerometer.

## Repository Structure

```text
matlab/
└── beam_bending_solver/
    ├── MatlabCode_AcceloPRINT.mlx
    └── MatlabCode_AcceloPRINT.pdf

models/
├── blender/
│   └── AcceloPrint_0.2.blend
└── stl/
    ├── Slider.stl
    ├── chasis_0.3.stl
    ├── sm_0.3.stl
    └── se_0.3.stl

cura_profiles/
└── flashforge/
    └── acceloprintmultimaterialprofile-for-flashforge.curaprofile

arduino/
├── sketch_may31c/
│   └── sketch_may31c.ino
└── sketch_may31d/
    └── sketch_may31d.ino

data_capture/
calibration/
docs/
examples/
