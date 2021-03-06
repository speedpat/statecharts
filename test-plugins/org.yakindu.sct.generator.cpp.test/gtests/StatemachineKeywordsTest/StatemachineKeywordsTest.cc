/**
* Copyright (c) 2016 committers of YAKINDU and others.
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*
* Contributors:
*     committers of YAKINDU - initial API and implementation
*/
#include <string>
#include "gtest/gtest.h"
#include "StatechartKeywords.h"

TEST(StatemachineTest, statemachineKeywords) {
	StatechartKeywords* statechart = new StatechartKeywords();
	statechart->init();
	statechart->enter();
	EXPECT_TRUE(statechart->isStateActive(StatechartKeywords::main_region_Timer));
	delete statechart;
}
