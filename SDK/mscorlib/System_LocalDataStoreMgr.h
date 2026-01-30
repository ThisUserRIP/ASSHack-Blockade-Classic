#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct LocalDataStore; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct LocalDataStoreSlot; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct LocalDataStoreHolder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct LocalDataStoreMgr : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<bool>* m_SlotInfoTable;
		int32_t m_FirstAvailableSlot;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::LocalDataStore>* m_ManagedLocalDataStores;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::LocalDataStoreSlot>* m_KeyToSlotMap;
		int64_t m_CookieGenerator;
		struct StaticFields
		{
			int32_t InitialSlotTableSize;
			int32_t SlotTableDoubleThreshold;
			int32_t LargeSlotTableSizeIncrease;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::LocalDataStoreHolder* CreateLocalDataStore();
		void DeleteLocalDataStore(mscorlib::System::LocalDataStore* store);
		mscorlib::System::LocalDataStoreSlot* AllocateDataSlot();
		mscorlib::System::LocalDataStoreSlot* AllocateNamedDataSlot(mscorlib::System::String* name);
		mscorlib::System::LocalDataStoreSlot* GetNamedDataSlot(mscorlib::System::String* name);
		void FreeNamedDataSlot(mscorlib::System::String* name);
		void FreeDataSlot(int32_t slot, int64_t cookie);
		void ValidateSlot(mscorlib::System::LocalDataStoreSlot* slot);
		int32_t GetSlotTableLength();
		void _ctor();
	};
}

