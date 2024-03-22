#include <gtest/gtest.h>
#include "../src/stack1.cpp"
using namespace std;

Stack <int> q;
Stack <int> w;
Stack <char> s;

TEST(HelloTest, BasicAssertions) {
    EXPECT_EQ(q.isEmpty(), w.isEmpty());
}

TEST(a1, b1) {
    q.push(1);
    EXPECT_EQ(q.isEmpty(), !w.isEmpty());
}

TEST(a2, b2) {
    w.push(1);
    EXPECT_EQ(q.peek(), w.peek());
}

TEST(a3, b3) {
    q.pop();
    EXPECT_EQ(q.isEmpty(), true);
}

TEST(a4, b4) {
    q.pop();
    EXPECT_EQ(w.isEmpty(), false);
}

TEST(a5, b5) {
    for (int i = 0; i < 24; i++) {
        s.push(char('a' + i));
    }

    EXPECT_EQ(s.peek(), 'x');
}

TEST(a6, b7) {
    for (int i = 0; i < 22; i++) {
        s.pop();
    }

    EXPECT_EQ(s.peek(), 'b');
}
