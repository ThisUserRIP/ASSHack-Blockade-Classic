#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource_Joystick; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired::Platforms::Custom
{
	struct CustomInputSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputSource ahBoCpeJUjrTsKZPByksFIqcSqa;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick>* tDbRebBALWkNWkcIRpkgIdbadlVf;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick>* YKYJhovEbSHAzTVQyBvGIWNtEmF;
		bool UFdDNkejjdNWyukQtxFTAunYWCiR;
		mscorlib::System::Action* blPeYiavpukRqCnpslIghzSEklmW;
		mscorlib::System::Action* EPSEYMmAdvATEgOodrZcGnbZbtI;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		bool get_useApproximateMatching();
		void set_useApproximateMatching(bool value);
		void add__JoystickConnectedEvent(mscorlib::System::Action* value);
		void remove__JoystickConnectedEvent(mscorlib::System::Action* value);
		void add__JoystickDisconnectedEvent(mscorlib::System::Action* value);
		void remove__JoystickDisconnectedEvent(mscorlib::System::Action* value);
		void add_JoystickConnectedEvent(mscorlib::System::Action* value);
		void remove_JoystickConnectedEvent(mscorlib::System::Action* value);
		void add_JoystickDisconnectedEvent(mscorlib::System::Action* value);
		void remove_JoystickDisconnectedEvent(mscorlib::System::Action* value);
		Rewired_Core::Rewired::InputSource get_inputSource();
		void _ctor(int32_t inputSource);
		void AddJoystick(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick* joystick);
		void RemoveJoystick(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick* joystick);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick>* GetJoysticks();
		void OnJoystickConnected();
		void OnJoystickDisconnected();
		IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* DPvDEqdbxmAEGBsSVhQExePZZysp();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
		bool get_isReady();
		void Update();
	};
}

