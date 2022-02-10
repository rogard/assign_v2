////////////////////////////////////////////////////////////////////////////
//  Boost.Assign v2                                                       //
//                                                                        //
//  Copyright (C) 2003-2004 Thorsten Ottosen                              //
//  Copyright (C) 2011 Erwann Rogard                                      //
//  Use, modification and distribution are subject to the                 //
//  Boost Software License, Version 1.0. (See accompanying file           //
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)      //
////////////////////////////////////////////////////////////////////////////
#include <libs/assign/v2/test/deque/csv_deque_basic.h>
#include <libs/assign/v2/test/deque/csv_deque_ext.h>
#include <libs/assign/v2/test/deque/deque.h>

namespace test_assign_v2{
namespace xxx_deque{

    void test()
    {
        xxx_deque::test();
        xxx_csv_deque_basic::test();
        xxx_csv_deque_ext::test();
    }

}// xxx_deque
}// test_assign_v2
