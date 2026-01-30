#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UIntPtr.h"
namespace mscorlib::System { struct UIntPtr; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TraceLoggingDataCollector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		int32_t BeginBufferedArray();
		void EndBufferedArray(int32_t bookmark, int32_t count);
		void AddScalar(bool value);
		void AddScalar(int8_t value);
		void AddScalar(uint8_t value);
		void AddScalar(int16_t value);
		void AddScalar(uint16_t value);
		void AddScalar(int32_t value);
		void AddScalar(uint32_t value);
		void AddScalar(int64_t value);
		void AddScalar(uint64_t value);
		void AddScalar(intptr_t value);
		void AddScalar(uintptr_t value);
		void AddScalar(float value);
		void AddScalar(double value);
		void AddScalar(wchar_t value);
		void AddScalar(mscorlib::System::Guid value);
		void AddBinary(mscorlib::System::String* value);
		void AddBinary(IL2CPP::Array<uint8_t>* value);
		void AddArray(IL2CPP::Array<bool>* value);
		void AddArray(IL2CPP::Array<int8_t>* value);
		void AddArray(IL2CPP::Array<int16_t>* value);
		void AddArray(IL2CPP::Array<uint16_t>* value);
		void AddArray(IL2CPP::Array<int32_t>* value);
		void AddArray(IL2CPP::Array<uint32_t>* value);
		void AddArray(IL2CPP::Array<int64_t>* value);
		void AddArray(IL2CPP::Array<uint64_t>* value);
		void AddArray(IL2CPP::Array<intptr_t>* value);
		void AddArray(IL2CPP::Array<uintptr_t>* value);
		void AddArray(IL2CPP::Array<float>* value);
		void AddArray(IL2CPP::Array<double>* value);
		void AddArray(IL2CPP::Array<wchar_t>* value);
		void AddArray(IL2CPP::Array<mscorlib::System::Guid>* value);
		static void _cctor();
	};
}

