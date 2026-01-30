#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerWithAxes.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct XlNEwAfQHyavqEBPqVMEoDalGKuP; };
#include "Rewired_InputSource.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired
{
	struct CustomController : Rewired_Core::Rewired::ControllerWithAxes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _sourceControllerId;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Single>* axisUpdateCallback;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* buttonUpdateCallback;
		bool useUpdateCallbacks;
		mscorlib::System::Guid _deviceInstanceGuid;
		int32_t get_sourceControllerId();
		mscorlib::System::Guid get_deviceInstanceGuid();
		void _ctor(Rewired_Core::XlNEwAfQHyavqEBPqVMEoDalGKuP* data);
		void _ctor(int32_t controllerId, int32_t sourceControllerId, mscorlib::System::Guid hardwareTypeGuid, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, int32_t axisCount, int32_t buttonCount, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void FillData();
		void SetAxisValue(int32_t index, float value);
		void SetAxisValue(mscorlib::System::String* elementName, float value);
		void SetAxisValueById(int32_t elementId, float value);
		void SetButtonValue(int32_t index, bool value);
		void SetButtonValue(mscorlib::System::String* elementName, bool value);
		void SetButtonValueById(int32_t elementId, bool value);
		void SetAxisUpdateCallback(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Single>* callback);
		void SetButtonUpdateCallback(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* callback);
		void ClearAxisValue(int32_t index);
		void ClearAxisValue(mscorlib::System::String* elementName);
		void ClearAxisValueById(int32_t elementId);
		void ClearButtonValue(int32_t index);
		void ClearButtonValue(mscorlib::System::String* elementName);
		void ClearButtonValueById(int32_t elementId);
	};
}

