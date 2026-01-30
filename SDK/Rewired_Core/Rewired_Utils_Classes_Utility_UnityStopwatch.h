#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_Utility_StopwatchBase.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct UnityStopwatch_zvRdsTQHADVezGSiULrRrVFaLKN; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct UnityStopwatch : Rewired_Core::Rewired::Utils::Classes::Utility::StopwatchBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::UnityStopwatch_zvRdsTQHADVezGSiULrRrVFaLKN* onMaZKmZFzRtdUDRarezrSiPPWM;
		bool jlJfKRGJjERuQwxLFeKidvUOIjO;
		double EFDJOKonhaedtiwWgyOsYIgPjBl;
		struct StaticFields
		{
			int64_t zqwoRQBrjCbnosHojRMbnsXvVrV;
			Rewired_Core::Rewired::Utils::Classes::Utility::UnityStopwatch* gGSbXxDJxFJRuvoSXiVxmeCgjdd;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Utils::Classes::Utility::UnityStopwatch* get_Global();
		static int64_t get_frequency();
		static Rewired_Core::Rewired::Utils::Classes::Utility::UnityStopwatch* StartNew();
		static int64_t ConvertTo100NSTicks(int64_t ticks);
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
		void _ctor();
		void _ctor(bool isGlobal);
		void Finalize();
		void Stop();
		void Start();
		void Reset();
		void ZeTBDdIWjHBOoAMJuFCDIAKeqZuv();
		void RCeGUsSLBAxeTNZhrboUDuhBRCo();
		void LXLYGqZkvcchyPQbGehtfpCiJzuK(Rewired_Core::Rewired::UpdateLoopType A_1);
	};
}

