#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplateElementIdentifier : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		mscorlib::System::String* _positiveName;
		mscorlib::System::String* _negativeName;
		Rewired_Core::Rewired::ControllerTemplateElementType _elementType;
		bool isMappableOnPlatform;
		int32_t get_id();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_positiveName();
		void set_positiveName(mscorlib::System::String* value);
		mscorlib::System::String* get_negativeName();
		void set_negativeName(mscorlib::System::String* value);
		Rewired_Core::Rewired::ControllerTemplateElementType get_elementType();
		bool get_useEditorElementTypeOverride();
		Rewired_Core::Rewired::ControllerElementType get_editorElementTypeOverride();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementIdentifier* source);
		void _ctor(int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerTemplateElementType elementType, bool isMappableOnPlatform);
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementIdentifier* source, Rewired_Core::Rewired::ControllerTemplateElementType changedElementType, bool isMappableOnPlatform);
		Rewired_Core::Rewired::ControllerTemplateElementIdentifier* Clone();
		mscorlib::System::String* GetDisplayName(Rewired_Core::Rewired::AxisRange axisRange);
		Rewired_Core::Rewired::ControllerElementIdentifier* ToControllerElementIdentifier();
		mscorlib::System::Object* Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType();
		bool Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride();
		Rewired_Core::Rewired::ControllerElementType Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride();
	};
}

