#include "Client.h"

namespace tweet {

	proto::TweetOut Client::Tweet(const proto::TweetIn in)
	{
		grpc::ClientContext clientContext;
		proto::TweetOut out;

		auto status = stub_->Tweet(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

	proto::FollowOut Client::Follow(const proto::FollowIn in)
	{
		grpc::ClientContext clientContext;
		proto::FollowOut out;

		auto status = stub_->Follow(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

	proto::ShowOut Client::Show(const proto::ShowIn in)
	{
		grpc::ClientContext clientContext;
		proto::ShowOut out;

		auto status = stub_->Show(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

	proto::LoginOut Client::Login(const proto::LoginIn in)
	{
		grpc::ClientContext clientContext;
		proto::LoginOut out;

		auto status = stub_->Login(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

	proto::logoutOut Client::Logout(const proto::LogoutIn in)
	{
		grpc::ClientContext clientContext;
		proto::logoutOut out;

		auto status = stub_->Logout(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

	proto::RegisterOut Client::Register(const proto::RegisterIn in)
	{
		grpc::ClientContext clientContext;
		proto::RegisterOut out;

		auto status = stub_->Register(&clientContext, in, &out);

		if (!status.ok()) {
			throw std::runtime_error("Tweet error.");
		}
		return out;
	}

} // End namespace tweet.
