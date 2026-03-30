# CGAL GSoC Preparation – Python Bindings Analysis

##  Overview

This repository contains my initial exploration and analysis of CGAL Python bindings using nanobind, as part of my preparation for GSoC 2026.

---

##  Work Done

###  1. Environment Setup
- Cloned CGAL repository
- Installed dependencies (Boost, Qt, etc.)
- Explored Arrangement_2 package examples

---

###  2. Binding Analysis

Analyzed the following components:

- Vertex bindings  
- Face bindings  
- Halfedge bindings  
- Object bindings  
- Point-location bindings  

Each analysis includes:
- Observations  
- Issues (based on mentor requirements)  
- Suggested improvements  

---

###  3. Feature Matrix

Created a feature matrix for the **Arrangement_2 package**, evaluating:

- Docstrings  
- Named arguments  
- Default values  
- Safety  
- Ownership  
- Examples  
- CI  
- Coverage  

 See: `docs/feature_matrix.md`

---

##  Key Findings

- Missing docstrings across bindings  
- Lack of Pythonic APIs (no named args/defaults)  
- Ownership and lifetime issues (`reference_internal`, `keep_alive`)  
- Lack of examples and CI  
- Strong core coverage but weak usability  

---

##  Next Steps

- Add docstrings and named arguments  
- Improve ownership handling  
- Translate CGAL examples to Python  
- Expand feature coverage  

---

##  Tech Stack

- C++ (CGAL)  
- Python  
- nanobind  

---