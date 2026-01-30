#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerElementType.h"

namespace Rewired_Core::Rewired::Interfaces
{
	struct IControllerElementIdentifierCommon_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_id();
		mscorlib::System::String* get_name();
		mscorlib::System::String* get_positiveName();
		mscorlib::System::String* get_negativeName();
		mscorlib::System::Object* get_elementType();
		bool get_useEditorElementTypeOverride();
		Rewired_Core::Rewired::ControllerElementType get_editorElementTypeOverride();
	};
}

