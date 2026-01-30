#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Internal { struct GUIText; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Windows { struct HSrlnRRbkGiWiBHBXtIniwzjliY; };
namespace Rewired_Windows { struct UbRUfNpkhkOvHUrEzfXZhnCMphV; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\Rewired_Core\Rewired_Platforms_RawInputAxis.h"
namespace Rewired_Windows { struct cOHAidgswbVLcVTobTPKzvPAfqg; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Windows::Rewired::Dev::Tools
{
	struct RawInputJoystickElementIdentifier_Internal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Internal::GUIText* text;
		mscorlib::System::String* textBuffer;
		int32_t currentDeviceId;
		Rewired_Windows::HSrlnRRbkGiWiBHBXtIniwzjliY* gxPYKfPSkNwQSnpGvBRLzEfQGJM;
		Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV* ZIfHckZLATPEuFgfXgZheGZNHao;
		mscorlib::System::Guid deviceInstanceGuid;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>* TGVufyXVfhOanrRpBbuvucklURN;
		bool showAllDevices;
		bool refreshNow;
		bool ready;
		IL2CPP::Array<mscorlib::System::String*>* axisNames;
		IL2CPP::Array<int32_t>* axisValues;
		void Initialize(Rewired_Core::Rewired::Internal::GUIText* text);
		void Start();
		void Update();
		void OnDestroy();
		void UpdateDeviceList();
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void Refresh();
		void Clear();
		void Log(mscorlib::System::String* key, mscorlib::System::Object* value);
		void LogSet(mscorlib::System::String* label, mscorlib::System::Object* value);
		int32_t KimccvIlcjmLviuWnFGFjtmFclaK(Rewired_Core::Rewired::Platforms::RawInputAxis A_1, int32_t A_2, Rewired_Windows::cOHAidgswbVLcVTobTPKzvPAfqg* A_3);
		float NormalizeAxis(int32_t value);
		void _ctor();
	};
}

