#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct LocalDataStoreElement; };
namespace mscorlib::System { struct LocalDataStoreMgr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct LocalDataStoreSlot; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System
{
	struct LocalDataStore : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::LocalDataStoreElement*>* m_DataTable;
		mscorlib::System::LocalDataStoreMgr* m_Manager;
		void _ctor(mscorlib::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);
		void Dispose();
		mscorlib::System::Object* GetData(mscorlib::System::LocalDataStoreSlot* slot);
		void SetData(mscorlib::System::LocalDataStoreSlot* slot, mscorlib::System::Object* data);
		void FreeData(int32_t slot, int64_t cookie);
		mscorlib::System::LocalDataStoreElement* PopulateElement(mscorlib::System::LocalDataStoreSlot* slot);
	};
}

