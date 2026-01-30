#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputMapper.h"
namespace Rewired_Core::Rewired { struct InputMapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct InputMapper_Context : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		Rewired_Core::Rewired::ControllerMap* kcZEkeCkwsbDlVpCQYkhfRfbrAbY;
		Rewired_Core::Rewired::ActionElementMap* LoHbKoDxZJNWCnKEZlcKhKDKbDAA;
		Rewired_Core::Rewired::AxisRange ziSzCFoxAoVimtgDCVRIrFyfqLY;
		bool BfXPhAxinnqqiSjrTbiFSWYFVqZ;
		int32_t get_actionId();
		void set_actionId(int32_t value);
		mscorlib::System::String* get_actionName();
		void set_actionName(mscorlib::System::String* value);
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		void set_controllerMap(Rewired_Core::Rewired::ControllerMap* value);
		Rewired_Core::Rewired::ActionElementMap* get_actionElementMapToReplace();
		void set_actionElementMapToReplace(Rewired_Core::Rewired::ActionElementMap* value);
		Rewired_Core::Rewired::AxisRange get_actionRange();
		void set_actionRange(Rewired_Core::Rewired::AxisRange value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputMapper_Context* source);
		Rewired_Core::Rewired::InputMapper_Context* Clone();
		void EYpdoItkPFoBarogeiPJEAauNGS();
		bool XKULHDRqoVicIiiQfnsWMAmrQHN();
		static void Copy(Rewired_Core::Rewired::InputMapper_Context* source, Rewired_Core::Rewired::InputMapper_Context* destination);
	};
}

