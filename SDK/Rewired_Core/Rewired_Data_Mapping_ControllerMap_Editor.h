#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "Rewired_HardwareControllerMapIdentifier.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMapIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace Rewired_Core::Rewired { struct KeyboardMap; };
namespace Rewired_Core::Rewired { struct MouseMap; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor; };
namespace Rewired_Core::Rewired { struct ControllerTemplateMap; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct IHardwareControllerMap; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct ControllerMap_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t categoryId;
		int32_t layoutId;
		mscorlib::System::String* name;
		mscorlib::System::String* hardwareGuidString;
		int32_t customControllerUid;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* actionElementMaps;
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* get_ActionElementMaps();
		mscorlib::System::Guid get_hardwareGuid();
		void _ctor();
		Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor* Clone();
		Rewired_Core::Rewired::ActionElementMap* GetActionElementMap(int32_t index);
		Rewired_Core::Rewired::JoystickMap* uudaXKvuCGLhWLdMJGobqyltrwS(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::HardwareControllerMapIdentifier A_2, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_3, bool A_4);
		Rewired_Core::Rewired::KeyboardMap* zaVXYMlfhYWPGAlusCLEMcchvbh(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1);
		Rewired_Core::Rewired::MouseMap* oyBziKePdKnfTyWjwfZDZWogdNl(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1);
		Rewired_Core::Rewired::CustomControllerMap* CQzgAPjPAbUWRRGtyorIykffye(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::Data::CustomController_Editor* A_2);
		Rewired_Core::Rewired::ControllerTemplateMap* ftdUCNKatERmjtfAkgKJGGeuzDYU();
		void oNnbjvEDUvNtRnKKQGEyKpolbGb(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::ControllerMap* A_2, Rewired_Core::Rewired::HardwareControllerMapIdentifier A_3, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_4, bool A_5);
		void lXWGwKDpSDyEWiAaZyjsHUyZapGr(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::InputSource A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::Data::CustomController_Editor* A_4);
		void CreateElementsFromHardwareMap(Rewired_Core::Rewired::Data::Mapping::IHardwareControllerMap* hardwareJoystickMap);
		void CreateElementsFromHardwareMap(Rewired_Core::Rewired::Data::CustomController_Editor* customController);
		void AddActionElementMap();
		void InsertActionElementMap(int32_t index);
		void DeleteActionElementMap(int32_t index);
		bool ReorderActionElementMap(int32_t index, bool offsetDown, bool offsetNow);
		void DuplicateActionElementMap(int32_t index);
		Rewired_Core::Rewired::ActionElementMap* BXOBFBGgRFSArfhmMCuhFOuhzYUD();
	};
}

