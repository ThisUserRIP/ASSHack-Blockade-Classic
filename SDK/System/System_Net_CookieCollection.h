#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct Cookie; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
#include "System_Net_CookieCollection_Stamp.h"
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Net
{
	struct CookieCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_version;
		mscorlib::System::Collections::ArrayList* m_list;
		mscorlib::System::DateTime m_TimeStamp;
		bool m_has_other_versions;
		bool m_IsReadOnly;
		void _ctor();
		System::Net::Cookie* get_Item(int32_t index);
		void Add(System::Net::Cookie* cookie);
		void Add(System::Net::CookieCollection* cookies);
		int32_t get_Count();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::DateTime TimeStamp(System::Net::CookieCollection_Stamp how);
		bool get_IsOtherVersionSeen();
		int32_t InternalAdd(System::Net::Cookie* cookie, bool isStrict);
		int32_t IndexOf(System::Net::Cookie* cookie);
		void RemoveAt(int32_t idx);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
	};
}

