// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: device.proto

#include "device.pb.h"
#include "device.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace maarpc {

static const char* Device_method_names[] = {
  "/maarpc.Device/find",
  "/maarpc.Device/find_with_adb",
};

std::unique_ptr< Device::Stub> Device::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Device::Stub> stub(new Device::Stub(channel, options));
  return stub;
}

Device::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_find_(Device_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_find_with_adb_(Device_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Device::Stub::find(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::maarpc::DeviceInfosResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::EmptyRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_find_, context, request, response);
}

void Device::Stub::async::find(::grpc::ClientContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::DeviceInfosResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::EmptyRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_, context, request, response, std::move(f));
}

void Device::Stub::async::find(::grpc::ClientContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::DeviceInfosResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::DeviceInfosResponse>* Device::Stub::PrepareAsyncfindRaw(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::DeviceInfosResponse, ::maarpc::EmptyRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_find_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::DeviceInfosResponse>* Device::Stub::AsyncfindRaw(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfindRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Device::Stub::find_with_adb(::grpc::ClientContext* context, const ::maarpc::StringRequest& request, ::maarpc::DeviceInfosResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::StringRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_find_with_adb_, context, request, response);
}

void Device::Stub::async::find_with_adb(::grpc::ClientContext* context, const ::maarpc::StringRequest* request, ::maarpc::DeviceInfosResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::StringRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_with_adb_, context, request, response, std::move(f));
}

void Device::Stub::async::find_with_adb(::grpc::ClientContext* context, const ::maarpc::StringRequest* request, ::maarpc::DeviceInfosResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_find_with_adb_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::DeviceInfosResponse>* Device::Stub::PrepareAsyncfind_with_adbRaw(::grpc::ClientContext* context, const ::maarpc::StringRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::DeviceInfosResponse, ::maarpc::StringRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_find_with_adb_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::DeviceInfosResponse>* Device::Stub::Asyncfind_with_adbRaw(::grpc::ClientContext* context, const ::maarpc::StringRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfind_with_adbRaw(context, request, cq);
  result->StartCall();
  return result;
}

Device::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Device_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Device::Service, ::maarpc::EmptyRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Device::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::EmptyRequest* req,
             ::maarpc::DeviceInfosResponse* resp) {
               return service->find(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Device_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Device::Service, ::maarpc::StringRequest, ::maarpc::DeviceInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Device::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::StringRequest* req,
             ::maarpc::DeviceInfosResponse* resp) {
               return service->find_with_adb(ctx, req, resp);
             }, this)));
}

Device::Service::~Service() {
}

::grpc::Status Device::Service::find(::grpc::ServerContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::DeviceInfosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Device::Service::find_with_adb(::grpc::ServerContext* context, const ::maarpc::StringRequest* request, ::maarpc::DeviceInfosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace maarpc

