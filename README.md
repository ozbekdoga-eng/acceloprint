# AcceloPrint

AcceloPrint is a customizable accelerometer prototyping project combining multi-material 3D printing, mechanical beam design, capacitive sensing, MATLAB-based modeling, and embedded data-capture workflows.

The project explores how 3D-printed structures can be designed as functional sensing systems, where geometry, material selection, beam length, and fabrication parameters influence the sensing range and response of a printed accelerometer.

The project is published in CHI 2025, LBW session: https://dl.acm.org/doi/10.1145/3706599.3720059

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
```

## Current Contents

### MATLAB Beam-Bending Solver

The MATLAB workflow implements a reverse solver for estimating cantilever beam dimensions in the AcceloPrint accelerometer structure. It uses material properties, geometric parameters, static loading assumptions, and Euler-Bernoulli beam-bending equations to estimate the cantilever beam length required for a target deflection under a given acceleration input.

### 3D Model Files

The repository includes Blender and STL model files related to the AcceloPrint prototype geometry. These files document the physical design assets used for modeling, fabrication, and iteration.

### Cura Profile

The Cura profile documents multi-material slicing and fabrication settings used for AcceloPrint-related prototyping.

### Arduino Sketches

The Arduino sketches are included as embedded-system code assets for future organization of AcceloPrint data capture, sensor readout, or prototype control workflows.

## Planned Additions

Future additions may include:

- Cleaned and documented Arduino/ESP32 sensor readout code
- Serial data capture scripts
- Calibration and validation workflows
- Example non-private datasets
- Wiring diagrams and setup instructions
- Fabrication and assembly documentation

## Notes

This repository is intended as a project archive and technical portfolio for AcceloPrint. Some parameters may need to be adjusted depending on material properties, printing parameters, infill, geometry, electronics, and experimental validation.
