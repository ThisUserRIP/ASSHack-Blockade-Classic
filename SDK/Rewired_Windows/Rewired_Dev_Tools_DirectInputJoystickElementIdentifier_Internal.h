#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Internal { struct GUIText; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput { struct DirectInput; };
namespace Rewired_Windows { struct zKWTVmdlLkGjYoiksgnQfoEclKeo; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Windows { struct rBUGPecHCHOQccdWgbGopALptrQR; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerRealTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\Rewired_Core\Rewired_Platforms_DirectInputAxis.h"
namespace Rewired_Windows { struct HxzuPUbSEFNvjBVemBvgpVNLCBM; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Windows::Rewired::Dev::Tools
{
	struct DirectInputJoystickElementIdentifier_Internal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Internal::GUIText* text;
		mscorlib::System::String* textBuffer;
		int32_t currentDeviceId;
		Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput* npgJXMZAhhdiFiHWEOQRdCyfdMex;
		Rewired_Windows::zKWTVmdlLkGjYoiksgnQfoEclKeo* ZIfHckZLATPEuFgfXgZheGZNHao;
		mscorlib::System::Guid deviceInstanceGuid;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* TGVufyXVfhOanrRpBbuvucklURN;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* FoKQrvSdiimuLmvscurPHeIFRuM;
		bool showAllDevices;
		bool refreshNow;
		bool ready;
		int32_t rawDeviceCount;
		Rewired_Core::Rewired::Utils::Classes::Utility::TimerRealTime* RkaqdnjlLlDvOqGgVxaEDJAThyQ;
		void Initialize(Rewired_Core::Rewired::Internal::GUIText* text);
		void Start();
		void Update();
		void UpdateDeviceList();
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void Refresh();
		void Clear();
		void Log(mscorlib::System::String* key, mscorlib::System::Object* value);
		int32_t KimccvIlcjmLviuWnFGFjtmFclaK(Rewired_Core::Rewired::Platforms::DirectInputAxis A_1, Rewired_Windows::HxzuPUbSEFNvjBVemBvgpVNLCBM* A_2);
		float NormalizeAxis(int32_t value);
		void OnDestroy();
		void _ctor();
	};
}

