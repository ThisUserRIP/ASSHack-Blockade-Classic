#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_LowLevelInputEvent.h"
namespace Rewired_Core::Rewired { struct LowLevelInputEvent; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeRingBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct LowLevelInputEventQueue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::LowLevelInputEvent zkmOPBjSSaEWUFtjyOTkTYAvEXn;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* yNIZfgZVTisjxcCFKwKMrfFPekDG;
		int32_t KSkxgmeAibZmoSEgTBaxFJPluaa;
		int32_t ijLiMriTDoGRLxcsHYxwxKolNNX;
		int32_t bzgSsKzmULmfWEbaWrXWKeOavIB;
		int32_t TBkQngMbphcdWRoOXnjxsGujDyW;
		int32_t kGYIJpmeZMocutLvQTsNJcYZrjv;
		uint32_t eyiubeRimuefeqLjqCmzkNojfpqn;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		int32_t get_Count();
		int32_t get_Capacity();
		Rewired_Core::Rewired::LowLevelInputEvent get_Item(int32_t index);
		void _ctor(int32_t capacity, int32_t buttonCount, int32_t axisCount, int32_t hatCount);
		Rewired_Core::Rewired::LowLevelInputEvent CreateEvent();
		int32_t FindNextIndex(uint32_t id);
		bool TryGetNext(int32_t index, Rewired_Core::Rewired::LowLevelInputEvent& event);
		void Clear();
		void CopyAllFrom(Rewired_Core::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* other);
		void CopyNewEventsFrom(Rewired_Core::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* other);
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

