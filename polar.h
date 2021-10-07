namespace polar {
    struct rect {
        double x;
        double y;
    };

    struct polar {
        double distance;
        double angle;
    };

    polar rect_to_polar(rect);

    void show_polar(polar);
}

#define RAD_DEGREE 57.29577951





