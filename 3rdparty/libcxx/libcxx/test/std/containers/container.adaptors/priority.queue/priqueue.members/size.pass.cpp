//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <queue>

// priority_queue();

// size_type size() const;

#include <queue>
#include <cassert>

int main()
{
    std::priority_queue<int> q;
    assert(q.size() == 0);
    q.push(1);
    assert(q.size() == 1);
    q.pop();
    assert(q.size() == 0);
}
