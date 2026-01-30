#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct UnityUnifiedMouseSource_dMqhublJhoOKjWsEwLhLJfXEEitH; };
namespace Rewired_Core::Rewired { template <typename T> struct UpdateLoopDataSet_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "Rewired_InputSource.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
#include "Rewired_UpdateLoopType.h"
#include "Rewired_ControllerElementType.h"

namespace Rewired_Core::Rewired
{
	struct UnityUnifiedMouseSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::UpdateLoopDataSet_1<Rewired_Core::Rewired::UnityUnifiedMouseSource_dMqhublJhoOKjWsEwLhLJfXEEitH>* XcGfxBVcMWkjSBCfAhXVqkrqTkB;
		IL2CPP::Array<float>* ATNJOeCRRwkBbFcHuvPQpniMdaC;
		IL2CPP::Array<bool>* qREBHYFwnzPpbbxtUSUlUtDwbcXS;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			Rewired_Core::Rewired::HardwareControllerMap_Game* JHkEmQBNBOsqhcOJuHEepQppKdP;
			mscorlib::System::Func_1<Rewired_Core::Rewired::UnityUnifiedMouseSource_dMqhublJhoOKjWsEwLhLJfXEEitH>* cDKiuclSZQjSrYetZwzIBJbpZvO;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::InputSource get_inputSource();
		Rewired_Core::Rewired::HardwareControllerMap_Game* get_hardwareMap();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mousePosition();
		Rewired_Core::Rewired::Controller_Extension* get_controllerExtension();
		void _ctor();
		void UpdateInputData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void Clear();
		void LlYSYULlfDggUWHyjUfjIKzrihT();
		void LjsFgiFLrBxILCcFRJhbJWNomuf(Rewired_Core::Rewired::UpdateLoopType A_1);
		static Rewired_Core::Rewired::HardwareControllerMap_Game* BiJZqWFRxxbSFNZTlExhTArkqep();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
		static Rewired_Core::Rewired::ControllerElementType GetHardwareElementType(int32_t elementIdentifierId);
		static Rewired_Core::Rewired::UnityUnifiedMouseSource_dMqhublJhoOKjWsEwLhLJfXEEitH* AjAabrVZTebzYvxkjnrtHtqvPBi();
	};
}

