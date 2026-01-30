#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct LocalDataStoreMgr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct LocalDataStoreSlot : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::LocalDataStoreMgr* m_mgr;
		int32_t m_slot;
		int64_t m_cookie;
		void _ctor(mscorlib::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie);
		mscorlib::System::LocalDataStoreMgr* get_Manager();
		int32_t get_Slot();
		int64_t get_Cookie();
		void Finalize();
	};
}

