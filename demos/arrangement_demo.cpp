// NOTE: Demo is being actively set up.
// Dependencies (Boost, GMP, MPFR) are currently being configured.
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/Arr_segment_traits_2.h>
#include <CGAL/Arrangement_2.h>

#include <iostream>

typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef CGAL::Arr_segment_traits_2<Kernel> Traits_2;
typedef CGAL::Arrangement_2<Traits_2> Arrangement_2;
typedef Traits_2::Point_2 Point_2;
typedef Traits_2::X_monotone_curve_2 Segment_2;

int main() {
    Arrangement_2 arr;

    // Insert segments
    CGAL::insert(arr, Segment_2(Point_2(0, 0), Point_2(5, 5)));
    CGAL::insert(arr, Segment_2(Point_2(0, 5), Point_2(5, 0)));

    std::cout << "Arrangement created!" << std::endl;

    // Print counts
    std::cout << "Number of vertices: " << arr.number_of_vertices() << std::endl;
    std::cout << "Number of edges: " << arr.number_of_edges() << std::endl;
    std::cout << "Number of faces: " << arr.number_of_faces() << std::endl;

    // Iterate vertices
    std::cout << "\nVertices:\n";
    for (auto vit = arr.vertices_begin(); vit != arr.vertices_end(); ++vit) {
        std::cout << "Degree: " << vit->degree() << std::endl;
    }

    return 0;
}