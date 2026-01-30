#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct SortedList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Net
{
	struct PathList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::SortedList* m_list;
		void _ctor();
		int32_t get_Count();
		int32_t GetCookiesCount();
		mscorlib::System::Collections::ICollection* get_Values();
		mscorlib::System::Object* get_Item(mscorlib::System::String* s);
		void set_Item(mscorlib::System::String* s, mscorlib::System::Object* value);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::Object* get_SyncRoot();
	};
}

