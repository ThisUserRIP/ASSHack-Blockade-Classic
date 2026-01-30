#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_EventData; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_EventData; };
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "System_Byte.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct DataCollector
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t* scratchEnd;
		mscorlib::System::Diagnostics::Tracing::EventSource_EventData* datasEnd;
		mscorlib::System::Runtime::InteropServices::GCHandle* pinsEnd;
		mscorlib::System::Diagnostics::Tracing::EventSource_EventData* datasStart;
		uint8_t* scratch;
		mscorlib::System::Diagnostics::Tracing::EventSource_EventData* datas;
		mscorlib::System::Runtime::InteropServices::GCHandle* pins;
		IL2CPP::Array<uint8_t>* buffer;
		int32_t bufferPos;
		int32_t bufferNesting;
		bool writingScalars;
		void Enable(uint8_t* scratch, int32_t scratchSize, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* datas, int32_t dataCount, mscorlib::System::Runtime::InteropServices::GCHandle* pins, int32_t pinCount);
		void Disable();
		mscorlib::System::Diagnostics::Tracing::EventSource_EventData* Finish();
		void AddScalar(void* value, int32_t size);
		void AddBinary(mscorlib::System::String* value, int32_t size);
		void AddBinary(mscorlib::System::Array* value, int32_t size);
		void AddArray(mscorlib::System::Array* value, int32_t length, int32_t itemSize);
		int32_t BeginBufferedArray();
		void EndBufferedArray(int32_t bookmark, int32_t count);
		void BeginBuffered();
		void EndBuffered();
		void EnsureBuffer();
		void EnsureBuffer(int32_t additionalSize);
		void GrowBuffer(int32_t required);
		void PinArray(mscorlib::System::Object* value, int32_t size);
		void ScalarsBegin();
		void ScalarsEnd();
	};
}

