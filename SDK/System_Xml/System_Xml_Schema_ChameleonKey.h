#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Schema
{
	struct ChameleonKey : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* targetNS;
		System::System::Uri* chameleonLocation;
		System_Xml::System::Xml::Schema::XmlSchema* originalSchema;
		int32_t hashCode;
		void _ctor(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::XmlSchema* originalSchema);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
	};
}

