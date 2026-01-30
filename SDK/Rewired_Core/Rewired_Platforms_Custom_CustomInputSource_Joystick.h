#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_Custom_CustomInputSource_Controller.h"
#include "Rewired_Platforms_Custom_CustomInputSource.h"
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource_Axis; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource_Button; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Platforms::Custom
{
	struct CustomInputSource_Joystick : Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Controller
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Nullable_1<mscorlib::System::Int64> sJZOEqKlhzQruXIBgUDjxtpawzu;
		int32_t zhVaIslkwUgnhmVBWGJsIFcDQCV;
		IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Axis*>* ihkxSfgDmybPfRXedbSqLVdkipy;
		IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Button*>* KSpzNAgatRNMZeWMcWyvXBJKZgz;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Axis>* yIJzJFmHtQOpyhkBywciSNuhZfp;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Button>* fibvTDkZrbQCSDhpbyCeVZyhxVJ;
		bool WSmBCljpedPSapyZUUtVaWrYWDv;
		Rewired_Core::Rewired::Controller_Extension* skKvcpwwTuJAjFXvFLWKIavZCmp;
		mscorlib::System::Nullable_1<mscorlib::System::Int64> get_systemId();
		void set_systemId(mscorlib::System::Nullable_1<mscorlib::System::Int64> value);
		int32_t get_unityId();
		void set_unityId(int32_t value);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Axis>* get_Axes();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Button>* get_Buttons();
		bool get_supportsVibration();
		void set_supportsVibration(bool value);
		Rewired_Core::Rewired::Controller_Extension* get_extension();
		void set_extension(Rewired_Core::Rewired::Controller_Extension* value);
		int32_t get_buttonCount();
		int32_t get_axisCount();
		void _ctor(mscorlib::System::String* deviceName, mscorlib::System::Nullable_1<mscorlib::System::Int64> systemId, int32_t unityId, int32_t axisCount, int32_t buttonCount);
		float GetAxisValue(int32_t index);
		bool GetButtonValue(int32_t index);
	};
}

