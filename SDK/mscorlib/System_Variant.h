#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_BRECORD.h"
namespace mscorlib::System { struct BRECORD; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Variant
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int16_t vt;
		uint16_t wReserved1;
		uint16_t wReserved2;
		uint16_t wReserved3;
		int64_t llVal;
		int32_t lVal;
		uint8_t bVal;
		int16_t iVal;
		float fltVal;
		double dblVal;
		int16_t boolVal;
		intptr_t bstrVal;
		int8_t cVal;
		uint16_t uiVal;
		uint32_t ulVal;
		uint64_t ullVal;
		int32_t intVal;
		uint32_t uintVal;
		intptr_t pdispVal;
		mscorlib::System::BRECORD bRecord;
		void Clear();
	};
}

