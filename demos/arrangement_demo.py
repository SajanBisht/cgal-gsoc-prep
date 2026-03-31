# arrangement_demo.py

# NOTE: This is a conceptual demo based on current bindings

from cgalpy import *

def demo_arrangement():
    print("Creating arrangement...")

    arr = Arrangement_2()

    print("Arrangement created")

    # Example usage (depending on bindings availability)
    print("Iterating vertices:")
    for v in arr.vertices():
        print("Vertex degree:", v.degree())
        print("Is isolated:", v.is_isolated())

    print("\nIterating faces:")
    for f in arr.faces():
        print("Number of holes:", f.number_of_holes())

    print("\nIterating halfedges:")
    for e in arr.halfedges():
        print("Source:", e.source())
        print("Target:", e.target())

if __name__ == "__main__":
    demo_arrangement()