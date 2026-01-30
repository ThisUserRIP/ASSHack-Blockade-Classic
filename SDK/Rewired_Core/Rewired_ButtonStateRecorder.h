#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ButtonStateRecorder_tLRbedmvVGeYKJkfZiUJPKunlZc; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired
{
	struct ButtonStateRecorder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::ButtonStateRecorder_tLRbedmvVGeYKJkfZiUJPKunlZc*>* MOLikBISOoAUhxhGgzyUSFMkrFB;
		IL2CPP::Array<Rewired_Core::Rewired::ButtonStateRecorder_tLRbedmvVGeYKJkfZiUJPKunlZc*>* VmLurJjPhGgEiclnesfVjeYLBPFC;
		int32_t pPuSvKzAZTEdmAiZZOACRxFubTZR;
		int32_t QtKwUWWdBcnNZhOuBMnGJogGAby;
		uint32_t FOPFBeflIYSoVDEhSSyLEPcMRQW;
		struct StaticFields
		{
			int32_t yRRAlkOIHPckijJixeeYSGzIfGR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		double get_timePressed();
		double get_timeUnpressed();
		double get_lastTimePressed();
		double get_lastTimeUnpressed();
		double get_lastTimeStateChangedToPressed();
		double get_lastTimeStateChangedToUnpressed();
		double get_lastTimeStateChanged();
		void _ctor();
		void rzxcwQaQDJsOGhoApWnDOXVkvyqu(bool A_1, bool A_2, double A_3);
		bool djuEbVjhBuQEFaXwOSflvOmJOTIm(float A_1);
		bool lJVaHYodXJYOQDqgZaYnEJTcCjdK(float A_1);
		static bool djuEbVjhBuQEFaXwOSflvOmJOTIm(IL2CPP::Array<Rewired_Core::Rewired::ButtonStateRecorder_tLRbedmvVGeYKJkfZiUJPKunlZc*>* A_0, int32_t A_1, float A_2);
		void JTQQiRVorzHIyLuZadLqcOqsAtof();
		void zJbzOufrsBtxEPHEpbdbhOzmLZO();
		void vDSZNmmHLeAwLsNDyGYjQTDDIhuc(double A_1);
		static int32_t FfCssZEQCodQFDSNBEeFwsBTaXTs(int32_t A_0, int32_t A_1);
		static int32_t kgvZSNnRnNEKfEuSSdGVrflKiGY(int32_t A_0, int32_t A_1);
	};
}

