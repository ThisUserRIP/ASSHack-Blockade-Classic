#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareControllerTemplateMap.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Data { struct ControllerTemplateElementIdentifier_Editor; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickTemplateMap_Entry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickTemplateMap_SpecialElementEntry; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct ControllerTemplateElementIdentifier; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data::Mapping { struct ControllerMap_Editor; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerElementIdentifierCommon_Internal; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerTemplateElementIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct IControllerTemplateMapSpecialElement_Internal; };
namespace Rewired_Core { struct TRPKZqgoeeqwqIpWIsatQOCvNSY; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickTemplateMap : Rewired_Core::Rewired::Data::Mapping::HardwareControllerTemplateMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* controllerName;
		mscorlib::System::String* description;
		mscorlib::System::String* templateGuid;
		mscorlib::System::String* className;
		IL2CPP::Array<Rewired_Core::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>* elementIdentifiers;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry>* joysticks;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>* specialElements;
		int32_t elementIdentifierIdCounter;
		int32_t joystickIdCounter;
		mscorlib::System::Guid get_Guid();
		mscorlib::System::String* get_ControllerName();
		mscorlib::System::String* get_ClassName();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerTemplateElementIdentifier>* get_ElementIdentifiers();
		Rewired_Core::Rewired::ControllerTemplateElementIdentifier* GetElementIdentifier(int32_t id);
		bool ContainsElementIdentifier(int32_t id);
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierNames();
		IL2CPP::Array<int32_t>* GetElementIdentifierIds();
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierScriptingNames(bool useAlternate);
		int32_t GetMappableElementIdentifierInfo(IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids);
		int32_t GetNonMappableElementIdentifierInfo(IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids);
		IL2CPP::Array<mscorlib::System::String*>* GetJoystickNames();
		IL2CPP::Array<int32_t>* GetJoystickIds();
		mscorlib::System::Guid GetJoystickGuid(int32_t joystickId);
		int32_t GetJoystickId(mscorlib::System::Guid guid);
		mscorlib::System::String* GetJoystickFileGuidString(int32_t joystickId);
		bool LehgGufGoWoKhPvcvcrlkwlGlYD(Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor* A_1, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_2, mscorlib::System::Guid A_3, mscorlib::System::String& A_4);
		Rewired_Core::Rewired::ControllerTemplateElementIdentifier* BJFbFzmCPkZrdJvlJGKwcacZWzC(mscorlib::System::Guid A_1, int32_t A_2);
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>* GetSpecialElementsOrig();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* DfkBcjWmIWhmaMCSgEOPkciUzCR(mscorlib::System::Guid A_1);
		int32_t oOUbikYjddcfukLZJifHCwcmiOSo(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal>* Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers();
		Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier(int32_t A_1);
		mscorlib::System::String* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name();
		mscorlib::System::Guid Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid();
		int32_t Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetElementIdentifierCount();
		Rewired_Core::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifier(int32_t A_1);
		Rewired_Core::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifierById(int32_t A_1);
		Rewired_Core::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetSpecialTemplateElementByElementIdentifierId(int32_t A_1);
		Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetAxisTarget(Rewired_Core::Rewired::Controller* A_1, int32_t A_2);
		Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetButtonTarget(Rewired_Core::Rewired::Controller* A_1, int32_t A_2);
		void _ctor();
	};
}

