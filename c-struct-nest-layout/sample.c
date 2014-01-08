struct Sample {
	int a;
	int b;
	int c;
};

struct SampleTarget {
	int a;
	struct B {
		int b;
	};
	struct C {
		int c;
	};
};

int main(int argc, const char *argv[]) {
	struct Sample s;
	struct Sample st;

	s.a = s.b = s.c = 1;
	st.a = st.b = st.c = 1;

	return 0;
}
