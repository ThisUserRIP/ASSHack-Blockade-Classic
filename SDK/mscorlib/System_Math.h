#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_MidpointRounding.h"
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Math : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			double doubleRoundLimit;
			int32_t maxRoundingDigits;
			IL2CPP::Array<double>* roundPower10Double;
			double PI;
			double E;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static double Acos(double d);
		static double Asin(double d);
		static double Atan(double d);
		static double Atan2(double y, double x);
		static double Ceiling(double a);
		static double Cos(double d);
		static double Floor(double d);
		static double InternalRound(double value, int32_t digits, mscorlib::System::MidpointRounding mode);
		static double InternalTruncate(double d);
		static double Sin(double a);
		static double Tan(double a);
		static double Round(double a);
		static double Round(double value, int32_t digits);
		static double SplitFractionDouble(double* value);
		static double Truncate(double d);
		static double Sqrt(double d);
		static double Log(double d);
		static double Log10(double d);
		static double Exp(double d);
		static double Pow(double x, double y);
		static int32_t Abs(int32_t value);
		static int32_t AbsHelper(int32_t value);
		static int64_t Abs(int64_t value);
		static int64_t AbsHelper(int64_t value);
		static float Abs(float value);
		static double Abs(double value);
		static uint8_t Max(uint8_t val1, uint8_t val2);
		static int32_t Max(int32_t val1, int32_t val2);
		static int64_t Max(int64_t val1, int64_t val2);
		static float Max(float val1, float val2);
		static int32_t Min(int32_t val1, int32_t val2);
		static uint32_t Min(uint32_t val1, uint32_t val2);
		static int64_t Min(int64_t val1, int64_t val2);
		static uint64_t Min(uint64_t val1, uint64_t val2);
		static float Min(float val1, float val2);
		static double Log(double a, double newBase);
		static int32_t Sign(double value);
		static void _cctor();
	};
}

