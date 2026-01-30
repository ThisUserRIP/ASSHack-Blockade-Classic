#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_CompoundControllerElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_AxisRange.h"
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct ControllerElementIdentifier : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		mscorlib::System::String* _positiveName;
		mscorlib::System::String* _negativeName;
		Rewired_Core::Rewired::ControllerElementType _elementType;
		Rewired_Core::Rewired::CompoundControllerElementType _compoundElementType;
		bool isMappableOnPlatform;
		bool BfXPhAxinnqqiSjrTbiFSWYFVqZ;
		struct StaticFields
		{
			Rewired_Core::Rewired::ControllerElementIdentifier* FGpddDCTTaeDWziKmBMTaERMkqL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_id();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_positiveName();
		void set_positiveName(mscorlib::System::String* value);
		mscorlib::System::String* get_negativeName();
		void set_negativeName(mscorlib::System::String* value);
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		Rewired_Core::Rewired::CompoundControllerElementType get_compoundElementType();
		bool get_isCompoundElement();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerElementIdentifier* source);
		void _ctor(int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::CompoundControllerElementType compoundElementType, bool isMappableOnPlatform);
		void _ctor(int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerElementType elementType, bool isMappableOnPlatform);
		void _ctor(Rewired_Core::Rewired::ControllerElementIdentifier* source, bool isMappableOnPlatform, Rewired_Core::Rewired::ControllerElementType changedElementType);
		Rewired_Core::Rewired::ControllerElementIdentifier* Clone();
		mscorlib::System::String* GetDisplayName(Rewired_Core::Rewired::ControllerElementType actualElementType, Rewired_Core::Rewired::AxisRange axisRange);
		mscorlib::System::String* GetDisplayName(Rewired_Core::Rewired::AxisRange axisRange);
		mscorlib::System::Object* Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType();
		bool Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride();
		Rewired_Core::Rewired::ControllerElementType Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride();
		void bCELNeUADMxtpjjomeInEGLqDjbf();
		static Rewired_Core::Rewired::ControllerElementIdentifier* get_BlankReadOnly();
	};
}

