#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct Match; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Text::RegularExpressions { struct Group; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Text::RegularExpressions
{
	struct GroupCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::Match* _match;
		mscorlib::System::Collections::Hashtable* _captureMap;
		IL2CPP::Array<System::Text::RegularExpressions::Group*>* _groups;
		void _ctor(System::Text::RegularExpressions::Match* match, mscorlib::System::Collections::Hashtable* caps);
		mscorlib::System::Object* get_SyncRoot();
		bool get_IsSynchronized();
		int32_t get_Count();
		System::Text::RegularExpressions::Group* get_Item(int32_t groupnum);
		System::Text::RegularExpressions::Group* GetGroup(int32_t groupnum);
		System::Text::RegularExpressions::Group* GetGroupImpl(int32_t groupnum);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		void _ctor();
	};
}

