#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_Classes_Data_SerializedObject.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_XmlInfo_XmlAttribute; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_XmlInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo_XmlAttribute>* pnmAWGOdVDKwyxJfNtTlKouucHx;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo_XmlAttribute>* get_attributes();
		void _ctor();
		mscorlib::System::String* ToString();
	};
}

