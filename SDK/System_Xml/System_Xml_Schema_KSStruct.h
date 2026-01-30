#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct KeySequence; };
namespace System_Xml::System::Xml::Schema { struct LocatedActiveAxis; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct KSStruct : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t depth;
		System_Xml::System::Xml::Schema::KeySequence* ks;
		IL2CPP::Array<System_Xml::System::Xml::Schema::LocatedActiveAxis*>* fields;
		void _ctor(System_Xml::System::Xml::Schema::KeySequence* ks, int32_t dim);
	};
}

