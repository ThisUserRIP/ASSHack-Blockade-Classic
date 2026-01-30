#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct PrimitiveArray : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code;
		IL2CPP::Array<bool>* booleanA;
		IL2CPP::Array<wchar_t>* charA;
		IL2CPP::Array<double>* doubleA;
		IL2CPP::Array<int16_t>* int16A;
		IL2CPP::Array<int32_t>* int32A;
		IL2CPP::Array<int64_t>* int64A;
		IL2CPP::Array<int8_t>* sbyteA;
		IL2CPP::Array<float>* singleA;
		IL2CPP::Array<uint16_t>* uint16A;
		IL2CPP::Array<uint32_t>* uint32A;
		IL2CPP::Array<uint64_t>* uint64A;
		void _ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Array* array);
		void Init(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Array* array);
		void SetValue(mscorlib::System::String* value, int32_t index);
	};
}

