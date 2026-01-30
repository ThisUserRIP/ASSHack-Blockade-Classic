#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct StopwatchBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		double get_offsetSeconds();
		void set_offsetSeconds(double value);
		int64_t get_offsetTicks();
		void set_offsetTicks(int64_t value);
		double get_elapsedSeconds();
		double get_elapsedSecondsRaw();
		int64_t get_elapsedMilliseconds();
		int64_t get_elapsedMillisecondsRaw();
		int64_t get_elapsedTicks();
		int64_t get_elapsedTicksRaw();
		bool get_isRunning();
		void Stop();
		void Start();
		void Reset();
		void _ctor();
	};
}

