/**
 * Appcelerator Titanium License
 * This source code and all modifications done by Appcelerator
 * are licensed under the Apache Public License (version 2) and
 * are Copyright (c) 2009 by Appcelerator, Inc.
 */

/*
 *  Copyright (C) 1999-2000 Harri Porten (porten@kde.org)
 *  Copyright (C) 2008 Apple Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef ObjectPrototype_h
#define ObjectPrototype_h

#include "TiObject.h"

namespace TI {

    class ObjectPrototype : public TiObject {
    public:
        ObjectPrototype(TiExcState*, NonNullPassRefPtr<Structure>, Structure* prototypeFunctionStructure);

    private:
        virtual void put(TiExcState*, const Identifier&, TiValue, PutPropertySlot&);
        virtual bool getOwnPropertySlot(TiExcState*, unsigned propertyName, PropertySlot&);

        bool m_hasNoPropertiesWithUInt32Names;
    };

    TiValue JSC_HOST_CALL objectProtoFuncToString(TiExcState*, TiObject*, TiValue, const ArgList&);

} // namespace TI

#endif // ObjectPrototype_h
