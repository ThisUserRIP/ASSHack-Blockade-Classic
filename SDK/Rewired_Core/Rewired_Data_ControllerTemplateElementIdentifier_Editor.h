#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerTemplateElementIdentifier.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerElementType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerTemplateElementType.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementIdentifier; };

namespace Rewired_Core::Rewired::Data
{
	struct ControllerTemplateElementIdentifier_Editor : Rewired_Core::Rewired::ControllerTemplateElementIdentifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _scriptingName;
		mscorlib::System::String* _alternateScriptingName;
		bool _excludeFromExport;
		bool _useEditorElementTypeOverride;
		Rewired_Core::Rewired::ControllerElementType _editorElementTypeOverride;
		mscorlib::System::String* get_scriptingName();
		void set_scriptingName(mscorlib::System::String* value);
		mscorlib::System::String* get_alternateScriptingName();
		void set_alternateScriptingName(mscorlib::System::String* value);
		bool get_excludeFromExport();
		bool get_useEditorElementTypeOverride();
		Rewired_Core::Rewired::ControllerElementType get_editorElementTypeOverride();
		Rewired_Core::Rewired::ControllerTemplateElementType get_effectiveElementType();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::ControllerTemplateElementIdentifier_Editor* source);
		mscorlib::System::String* Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName();
		mscorlib::System::String* Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName();
		Rewired_Core::Rewired::ControllerTemplateElementIdentifier* Clone();
	};
}

