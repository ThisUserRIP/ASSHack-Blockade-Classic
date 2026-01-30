#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Specialized_NameObjectCollectionBase.h"
namespace System::System::Collections::Specialized { struct NameObjectCollectionBase; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System::System::Collections::Specialized
{
	struct NameObjectCollectionBase_NameObjectKeysEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _pos;
		System::Collections::Specialized::NameObjectCollectionBase* _coll;
		int32_t _version;
		void _ctor(System::Collections::Specialized::NameObjectCollectionBase* coll);
		bool MoveNext();
		void Reset();
		mscorlib::System::Object* get_Current();
	};
}

