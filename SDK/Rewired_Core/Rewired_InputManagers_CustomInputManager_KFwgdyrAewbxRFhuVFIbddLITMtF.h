#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputManagers_CustomInputManager.h"
namespace Rewired_Core::Rewired::InputManagers { struct CustomInputManager; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource_Joystick; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct BridgedController; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace Rewired_Core::Rewired { struct ControllerDisconnectedEventArgs; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Button; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Axis; };

namespace Rewired_Core::Rewired::InputManagers
{
	struct CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputSource nfoumPigLVnyolJsGocQXFVwskW;
		Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* mRtQkYomPvxBPAmUysEhxMGejxs;
		Rewired_Core::Rewired::Controller_Extension* skKvcpwwTuJAjFXvFLWKIavZCmp;
		int32_t sUxNiPCfCkgdRiykhSdzbHiaxVn;
		int32_t xeWjmlskZfXPXIDcEIMVecGclFVj;
		mscorlib::System::Nullable_1<mscorlib::System::Int64> sJZOEqKlhzQruXIBgUDjxtpawzu;
		int32_t zhVaIslkwUgnhmVBWGJsIFcDQCV;
		mscorlib::System::Guid cbaFOQwWeZYJWQMQtemVduPObPfV;
		mscorlib::System::String* mGYNvJxQCBczZsOVjiGozRwbOlF;
		mscorlib::System::String* KFZYUgcZisCjbKlzDYPXdiyoevY;
		int32_t yfOhRmaMWsOeEwaeWgrVbJjzyRKM;
		int32_t lWxfoImINHDLmgyViyOPVNWRSpQL;
		IL2CPP::Array<float>* uNbKkIdQXkgbBaWZZhiRHpCxAsdd;
		IL2CPP::Array<bool>* AqBvRjAhJlmESQEOzxzHWdmTlNr;
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* uwwUXKFpZybEWujWMaLDtoKrRAa;
		Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick* HYlcHvoArwAxFyVjMxqJVBgZWwK;
		bool eRuLTolGdaQCeEkpKsgaoKXYdid;
		mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* IGDBEoepWInkMCrSugRKQRBCdbj;
		int32_t get_hardwareButtonCount();
		int32_t get_hardwareAxisCount();
		int32_t get_rewiredId();
		void set_rewiredId(int32_t value);
		int32_t get_inputManagerId();
		void set_inputManagerId(int32_t value);
		mscorlib::System::String* get_name();
		mscorlib::System::Nullable_1<mscorlib::System::Int64> get_systemId();
		int32_t get_unityId();
		mscorlib::System::Guid get_instanceGuid();
		mscorlib::System::Guid get_persistentGuid();
		Rewired_Core::Rewired::Controller_Extension* get_extension();
		void SetVibration(float amount, int32_t motorIndex);
		void StopVibration();
		void _ctor(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* customInputSource, mscorlib::System::Nullable_1<mscorlib::System::Int64> systemJoystickId, int32_t unityJoystickId, Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick* joystick, Rewired_Core::Rewired::InputSource inputSource, Rewired_Core::Rewired::Controller_Extension* controllerExtension, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager);
		void cGrlKQnElSofnSJbLSyUPHcTTIN();
		void Update();
		int32_t rWQapOtWfZhPThFVxOaoMWVCNCmi(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1);
		void JYTVndlQkGuiwdzuvuninSCEVDU(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1);
		void JYTVndlQkGuiwdzuvuninSCEVDU(Rewired_Core::Rewired::BridgedController* A_1);
		void FillData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		Rewired_Core::Rewired::BridgedControllerHWInfo* sRtWMqzxDvmWlQlEPfFCymsuePT();
		Rewired_Core::Rewired::BridgedController* ToBridgedController();
		Rewired_Core::Rewired::ControllerDisconnectedEventArgs* ToControllerDisconnectedEventArgs();
		void fkzgbHJMBXqJwvpqfXcGmbnXuOM();
		void InBylEmicHyvZaFxBXrthYXUcON();
		bool LdrlFcRkCXUZlgLYOMJVGfbdqSS(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Button* A_1);
		bool cAnxGEJoxwVcNCGnVYZrDtMGvax(float A_1, float A_2);
		float dSixGVxBQofDdyaFgDxQjofPBQFk(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Axis* A_1);
		float dSixGVxBQofDdyaFgDxQjofPBQFk(int32_t A_1);
		bool LdrlFcRkCXUZlgLYOMJVGfbdqSS(int32_t A_1);
		void ileYApEGXZPtAKAVfetqXBCVjHd();
		void SCfWkHXDxsVPtNmCThGKGqlbdKIU();
		mscorlib::System::String* eLzfyozHEAEBXYmclHTMdaNcDSq();
		static int32_t TUQDXSaXRrBEzUXdvYqvxDfORT(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_0, Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1);
		static int32_t ipAgQDcgchgLNUPUvCtrZBOZmvd(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_0, Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1);
	};
}

