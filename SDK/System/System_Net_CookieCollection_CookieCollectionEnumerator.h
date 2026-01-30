#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_CookieCollection.h"
namespace System::System::Net { struct CookieCollection; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Net
{
	struct CookieCollection_CookieCollectionEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::CookieCollection* m_cookies;
		int32_t m_count;
		int32_t m_index;
		int32_t m_version;
		void _ctor(System::Net::CookieCollection* cookies);
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		bool System_Collections_IEnumerator_MoveNext();
		void System_Collections_IEnumerator_Reset();
	};
}

