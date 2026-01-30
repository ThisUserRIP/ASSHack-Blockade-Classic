#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core
{
	struct AcCIIIIDekBsKWhzIyNtDGqbhekB : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t eyllwOpakpEtwWUaCdkJGdmRatRf;
			int32_t mqRHCpUSUtIOdhJeBJaMMIkypEy;
			IL2CPP::Array<double>* lTYqmvqdotDOSFarYCQyiVECaBgv;
			int32_t GRVQOdehjlBtpJcCNIKDigkdWYZ;
			double pLPUpRKifKYQgsvTAdGqBtekRTO;
			int32_t NophlDKIqjlVUeDKZcABFSgADNYN;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static double get_smoothDeltaTime();
		static int32_t get_framesToSmooth();
		static void set_framesToSmooth(int32_t value);
		static void _cctor();
		static void rzxcwQaQDJsOGhoApWnDOXVkvyqu();
		static void zJbzOufrsBtxEPHEpbdbhOzmLZO();
	};
}

