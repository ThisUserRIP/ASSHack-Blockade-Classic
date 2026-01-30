#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct LowLevelInputEventQueue; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX; };
#include "Rewired_LowLevelInputEvent.h"
namespace Rewired_Core::Rewired { struct LowLevelInputEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct DualThreadLowLevelInputEventQueue_INewEventWrapper; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct DualThreadLowLevelInputEventQueue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* sykZEbMpfFWmdxiBtkJYNobYcGsJ;
		Rewired_Core::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* DQbNAzuUxZigdjjKbQAdLziUSxR;
		mscorlib::System::Object* dUmSnoEqbEgduOCKUkxzqnKOJtC;
		uint32_t OMsGOvLuPNdvZLgSXFBMIqDHVOif;
		bool uiiiMVETvdCLvFTykiGdrrDSExDd;
		int32_t QjpffwVyFArxJgmuSrkedjlsAIgI;
		int32_t LYtcfCBuYomLUQTYwogWhZlihOui;
		Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX* GxQVOiJeUfUgkosQREYTmipsTOK;
		Rewired_Core::Rewired::LowLevelInputEvent currentEvent;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		uint32_t get_lastProcessedEventId();
		int32_t get_count();
		void _ctor(int32_t capacity, int32_t buttonCount, int32_t axisCount, int32_t hatCount);
		Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* T_CreateEvent();
		void Update();
		void Clear();
		bool ProcessNewEvents();
		void StopProcessingEvents();
		void ImportAll(Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue* other);
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

